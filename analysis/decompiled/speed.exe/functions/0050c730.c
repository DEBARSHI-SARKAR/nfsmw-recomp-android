/* speed.exe 0050c730 FUN_0050c730; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 0050bfb0 FUN_0050bfb0
 * calls 0050c260 FUN_0050c260
 */

uint __fastcall FUN_0050c730(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((uVar3 >> 3 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = uVar3 | 0x12;
    iVar2 = param_1 + 8;
    *(int *)iVar2 = iVar2;
    *(int *)(param_1 + 0xc) = iVar2;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    iVar2 = FUN_00455fd0(0xaba86e60,*(undefined4 *)(param_1 + 0x10));
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar4 = FUN_0050bfb0(iVar2);
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      cVar1 = FUN_0050c260(0);
      uVar3 = *(uint *)(param_1 + 0x18);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x18) = uVar3 | 8;
        return CONCAT31((uint3)(uVar3 >> 0xb),(char)((uVar3 | 8) >> 3)) & 0xffffff01;
      }
      *(uint *)(param_1 + 0x18) = uVar3 & 0xfffffff7;
      return (uVar3 >> 0xb) << 8;
    }
  }
  return uVar3 & 0xffffff00;
}

