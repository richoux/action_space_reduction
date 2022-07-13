# Action Space Reduction
Action space reduction for reinforcement learning via constraint programming.

## Cloning this repository

Clone this repository with the recursive option to import its submodules.
```shell
git clone --recursive https://github.com/richoux/action_space_reduction
```

You may need to type the following command after cloning:
```shell
git submodule update --recursive
```

## How to install

Submodules are not taken into account for the moment.

You have to:
* install GHOST
* install protobuf for C++
* install protobuf for python with 
```shell
pip install protobuf==3.20.1
```
* clone the gym-microrts fork somewhere with
```shell
git clone --recursive https://github.com/richoux/gym-microrts
```
* install gym-microrts
* Create protobuf files with 
```shell
protoc -I=./protobuf_code --cpp_out=./protobuf_code --python_out=your_path_to/gym-microrts/experiments/ ./protobuf_code/asr.proto
```
* Compile the action\_space\_reduction model with
Just type
```shell
make
```
## How to run

Run the action\_space\_reduction model first:
```shell
./bin/action_space_reduction
```

Then run in an other terminal the python ppo\_gridnet
```shell
cd your_path_to/gym-microrts/experiments/
python ppo_gridnet.py
```

You should only have some prints in both terminals to check the communication
between action\_space\_reduction and ppo\_gridnet.py is correct.  Then, 
ppo\_gridnet.py will start learning as usual.
