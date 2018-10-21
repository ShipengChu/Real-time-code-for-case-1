#include<stdio.h>
#include"epanet2.h"
void main()
{
	ENopen("Net.inp", "1.rtp", "");   //open inp file
	ENinput("1.obs");                  //input  data of sensor and prior consumer demand
	ENfanyan();                        //start the calibration process
	ENsaveinpfile("result1.inp");      //save the calibrated result as a new inp file
	ENclosefanyan();                   //free memory 
	ENclose();                         //close the epanet
}