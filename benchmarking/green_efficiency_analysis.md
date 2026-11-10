# Green Efficiency Analysis

## Measurement Methodology

I used `clock()` from `<time.h>` to record CPU time before and after specific blocks of code, then converted the difference to seconds by dividing by `CLOCKS_PER_SEC`. Project 1 timed a loop of 100,000,000 iterations to establish a baseline. Project 2 timed two algorithms that count even numbers in a 50,000-element array: a naive nested-loop version and a single-pass version. Project 3 timed a three-stage pipeline (build, process, reduce) over 50,000 elements, plus the total.

To check consistency, I ran the Project 1 baseline three times and got 0.193297, 0.193064 and 0.194658 seconds, a spread of under 1%. I ran Project 2 three times and used the average. Project 3 was run only once, which is a limitation discussed below.

## Observed Performance Differences

In Project 2, the naive algorithm averaged 2.346235 seconds and the single-pass algorithm averaged 0.000091 seconds, so the single pass was about 25,782 times faster. For each index `i`, the naive inner loop runs `i + 1` times, so the total is 1 + 2 + ... + 50,000, about 1.25 billion iterations, against 50,000 for the single pass. That is a ratio of about 25,000. The close match suggests the difference is explained mainly by the number of iterations, not by the cost of each iteration.

In Project 3, all three stages loop exactly 50,000 times, so iteration count cannot explain their differences. The measured times were: build 0.000252 s, process 0.000268 s and reduce 0.000116 s, with a total of 0.000636 s. Reduce was the cheapest stage, taking less than half the time of either of the others. This may be because its loop body does less arithmetic per element (one multiply and one add). Build and process differ by about 6%, which I cannot call a real difference from a single run.

## Relation Between Runtime and Energy Consumption

This project does not measure power draw, so I cannot report watts or joules. Runtime is used as a proxy: the longer the CPU is actively working, the more energy it generally uses. On that basis, the naive algorithm, which ran for 2.346 seconds against 0.000091 seconds, would be expected to use far more energy for the same result. That is an inference from runtime, not a measured energy value, and the size of the energy difference may not match the size of the runtime difference.

## Limitations of the Experiment

First, Project 3 was run once, so I have no estimate of its run-to-run variation. The Project 1 baseline varied by under 1%, but that does not tell me how variable the much shorter Project 3 timings are. Second, the Project 3 total is only 0.000636 seconds, so the timer's resolution may be a significant fraction of each stage's time. I did not test this. Third, I used a small number of runs on one machine, so results may differ on other hardware, compilers or operating systems. Finally, I did not isolate the cost of individual operations such as division, so I cannot say which arithmetic operation causes the stage differences.

## Practical Engineering Takeaway

The results show two kinds of efficiency gain. The first is doing less work: reducing the iteration count in Project 2 gave a speedup of about 25,782x. The second is making each unit of work cheaper, which is the only option in Project 3, where iteration counts are fixed. Measuring before optimising matters: the stage timings show where effort could be focused, and repeated runs show whether a difference is real or noise. Reducing runtime is a practical way to reduce energy use, but real power measurement would be needed to quantify it.
