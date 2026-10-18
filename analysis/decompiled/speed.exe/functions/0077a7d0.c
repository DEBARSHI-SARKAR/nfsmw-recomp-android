/* speed.exe 0077a7d0 FUN_0077a7d0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 0076c780 FUN_0076c780
 * calls 0076c6a0 FUN_0076c6a0
 */

void __thiscall FUN_0077a7d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00881bf2;
  pvStack_c = ExceptionList;
  uVar3 = param_2 + 0x17U & 0xfffffff0;
  iVar1 = *(int *)(uVar3 + 4);
  ExceptionList = &pvStack_c;
  if (*(int *)(DAT_009b38a0 + iVar1 * 4) == 0) {
    ExceptionList = &pvStack_c;
    puVar2 = (undefined4 *)FUN_005d29d0(0x18,0);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = uVar3;
      FUN_0076c780(param_2);
    }
    *(undefined4 **)(DAT_009b38a0 + iVar1 * 4) = puVar2;
    uVar3 = 0;
    local_4 = 0xffffffff;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar2 = (undefined4 *)(param_1 + 0x24);
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(iVar1,1);
        }
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x20));
    }
  }
  FUN_0076c6a0(*(undefined4 *)(DAT_009b38a0 + iVar1 * 4));
  ExceptionList = pvStack_c;
  return;
}

