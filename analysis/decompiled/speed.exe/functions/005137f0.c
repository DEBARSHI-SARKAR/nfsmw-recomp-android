/* speed.exe 005137f0 FUN_005137f0; analysis pseudocode, not buildable source.
 */

void FUN_005137f0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x3f800000;
  (**(code **)(*param_3 + 0x28))(param_1,"ACCELERATION",0,0x3f800000,0,0,0,0x43200000);
  piVar1 = (int *)0x0;
  (**(code **)(*piVar2 + 0x28))(param_1,"TOPSPEED",0,0x3f800000,0,0,0,0x43200000);
  (**(code **)(*piVar1 + 0x28))(param_1,"HANDLING",0,0x3f800000,0,0,0,0x43200000);
  return;
}

