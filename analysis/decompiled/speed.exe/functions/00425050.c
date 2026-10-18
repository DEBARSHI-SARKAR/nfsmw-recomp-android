/* speed.exe 00425050 FUN_00425050; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 004250f3 FUN_004250f3
 */

void __thiscall FUN_00425050(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_008680a0;
  pvStack_10 = ExceptionList;
  uVar3 = param_2 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = uVar1 >> 1;
    param_2 = uVar3;
    if ((uVar3 / 3 < uVar2) && (uVar1 <= -uVar2 - 2)) {
      param_2 = uVar2 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_005d29d0(param_2 + 1,&PTR_LAB_004c5452_1_00890f10);
  FUN_004250f3();
  return;
}

