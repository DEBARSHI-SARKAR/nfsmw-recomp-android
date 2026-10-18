/* speed.exe 00521be0 FUN_00521be0; analysis pseudocode, not buildable source.
 * calls 0079ee50 FUN_0079ee50
 * calls 0079bac0 FUN_0079bac0
 * calls 0056e300 FUN_0056e300
 */

void __thiscall FUN_00521be0(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  puVar3 = &LAB_00519bd0;
  param_2 = param_2 + 0x28;
  puVar2 = &DAT_00890978;
  *(undefined4 *)(DAT_0091cf90 + 0x13c) = 1;
  iVar1 = param_1;
  FUN_0079bac0(param_2,&DAT_00890978,&LAB_00519bd0,param_1);
  iVar1 = FUN_0079ee50(param_2,puVar2,puVar3,iVar1);
  if (iVar1 < 0) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined1 *)(param_1 + 0x35) = 1;
  FUN_0056e300();
  return;
}

