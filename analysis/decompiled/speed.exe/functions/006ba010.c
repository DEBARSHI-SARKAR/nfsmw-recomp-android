/* speed.exe 006ba010 FUN_006ba010; analysis pseudocode, not buildable source.
 * calls 00478ec0 FUN_00478ec0
 * calls 005d29d0 FUN_005d29d0
 */

void __fastcall FUN_006ba010(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087dfbf;
  pvStack_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
  }
  puVar1 = (undefined4 *)FUN_005d29d0(0x14,0);
  uStack_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if (param_1 != 0x54) {
      iVar3 = param_1 + 0xc;
    }
    *puVar1 = &PTR_FUN_008952f0;
    uVar2 = FUN_00478ec0();
    puVar1[2] = uVar2;
    puVar1[3] = 0;
    puVar1[4] = iVar3;
    *(undefined4 **)(param_1 + 0x18) = puVar1;
    ExceptionList = pvStack_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = pvStack_c;
  return;
}

