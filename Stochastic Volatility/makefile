heston: main_heston.cpp heston_mc.o correlated_snd.o statistics.o option.o pay_off_call.o
	clang++ -o heston main_heston.cpp heston_mc.o correlated_snd.o statistics.o option.o pay_off_call.o -arch x86_64

heston_mc.o: heston_mc.cpp option.o
	clang++ -c heston_mc.cpp -o heston_mc.o -arch x86_64

correlated_snd.o: correlated_snd.cpp statistics.o
	clang++ -c correlated_snd.cpp -o correlated_snd.o -arch x86_64

statistics.o: statistics.cpp
	clang++ -c statistics.cpp -o statistics.o -arch x86_64

option.o: option.cpp pay_off_call.o
	clang++ -c option.cpp -o option.o -arch x86_64

pay_off.o: pay_off_call.cpp
	clang++ -c pay_off_call.cpp -o pay_off_call.o -arch x86_64
