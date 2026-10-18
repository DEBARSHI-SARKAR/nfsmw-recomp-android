/* speed.exe 0045ad50 FUN_0045ad50; analysis pseudocode, not buildable source.
 * calls 0045adc0 FUN_0045adc0
 * calls 0045ae40 FUN_0045ae40
 * calls 00455f70 FUN_00455f70
 */

void __thiscall
FUN_0045ad50(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869ebf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0045adc0(0x50,param_1);
  local_4 = 0;
  if (iVar1 == 0) {
    DAT_0090dcbc = 0;
  }
  else {
    DAT_0090dcbc = FUN_0045ae40(param_6);
  }
  *param_2 = *param_2 + 1;
  FUN_00455f70(param_4,DAT_0090dcbc,0);
  ExceptionList = local_c;
  return;
}

