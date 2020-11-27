# IEE-LEACH
Improved Energy-Efficient LEACH protocol
A simulation in NS3 simulator

This is an implementation of the following reasearch paper:  
[Liu, Y.; Wu, Q.; Zhao, T.; Tie, Y.; Bai, F.; Jin, M. An Improved Energy-Efficient Routing Protocol for Wireless Sensor Networks. Sensors 2019, 19, 4579.](https://www.mdpi.com/1424-8220/19/20/4579)

Credits to [wakwanza/leach](https://github.com/wakwanza/leach) for the LEACH protocol code. We modified it further according to the paper's needs.

## How to Run  

Download the ns3 simulator from [here](https://www.nsnam.org/releases/ns-3-32/)
Upack the compressed archive.

Then paste the files in the src folder into: `ns-allinone-3.32/ns-3.32/scratch`
Paste the `compare_plots.py` file into `ns-allinone-3.32/ns-3.32`

cd to `ns-allinone-3.32/ns-3.32` and run `./waf` which will build all the files.
Now run `./waf --run scratch/ieeLEACH`
Next run `python3 ./compare_plots.py` to see a comparison of energy consumption through a graph.
