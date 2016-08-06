# THIS FILE IS AUTOMATICALLY GENERATED
# Project: D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v3\Finish(state machine)\fin_v0.cydsn\fin_v0.cyprj
# Date: Sat, 06 Aug 2016 14:49:52 GMT
#set_units -time ns
create_clock -name {I2C_SCBCLK(FFB)} -period 625 -waveform {0 312.5} [list [get_pins {ClockBlock/ff_div_1}]]
create_clock -name {UART_XB_SCBCLK(FFB)} -period 8687.5 -waveform {0 4343.75} [list [get_pins {ClockBlock/ff_div_2}]]
create_clock -name {timer_clock(FFB)} -period 1000000 -waveform {0 500000} [list [get_pins {ClockBlock/ff_div_7}]]
create_clock -name {CyRouted1} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyWCO} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/wco}]]
create_clock -name {CyLFCLK} -period 30517.578125 -waveform {0 15258.7890625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyECO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/eco}]]
create_clock -name {CyIMO} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 20.833333333333332 -waveform {0 10.4166666666667} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {I2C_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 31 61} [list]
create_generated_clock -name {UART_XB_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 417 835} [list]
create_generated_clock -name {timer_clock} -source [get_pins {ClockBlock/hfclk}] -edges {1 48001 96001} [list]


# Component constraints for D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v3\Finish(state machine)\fin_v0.cydsn\TopDesign\TopDesign.cysch
# Project: D:\Cypress\system-start-finish\vesion 2\fw\finish\sandbox\v3\Finish(state machine)\fin_v0.cydsn\fin_v0.cyprj
# Date: Sat, 06 Aug 2016 14:49:49 GMT
