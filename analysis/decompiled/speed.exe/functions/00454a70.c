/* speed.exe 00454a70 FUN_00454a70; analysis pseudocode, not buildable source.
 * calls 00452a60 FUN_00452a60
 * calls 007c6100 _sprintf
 */

void FUN_00454a70(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined1 local_3c [20];
  undefined1 local_28 [20];
  undefined1 local_14 [20];
  
  FUN_00452a60();
  FUN_00452a60();
  FUN_00452a60();
  _sprintf(param_3,"%s\\%s\\%s\\%s\\%d\\%s\\[]:","AttribSys.pc",local_14,local_28,local_3c,param_1,
           param_2);
  return;
}

