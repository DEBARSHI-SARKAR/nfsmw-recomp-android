/* speed.exe 007e89d0 FUN_007e89d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007e89d0(int param_1,ushort *param_2,short param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)param_2 + 0xb);
  if (uVar3 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x40000) == 0) {
      iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x18));
      param_1 = param_1 + *(int *)(param_1 + 0x18);
      iVar2 = 0;
      if (0 < iVar1) {
        while ((*(short *)(param_1 + 4 + iVar2 * 4) != param_3 ||
               ((ushort)*(byte *)(param_1 + 7 + iVar2 * 4) != *param_2))) {
          iVar2 = iVar2 + 1;
          if (iVar1 <= iVar2) {
            return 0;
          }
        }
        param_1 = param_1 + 4 + iVar2 * 4;
LAB_007e8a54:
        if (param_1 != 0) {
          return (int)*(char *)(param_1 + 2);
        }
      }
    }
    else {
      param_1 = *(int *)(param_1 + 0x18) + 4 + (uint)param_2[6] * 4 + param_1;
      iVar1 = 0;
      if (uVar3 != 0) {
        do {
          if (*(short *)(param_1 + iVar1 * 4) == param_3) {
            param_1 = param_1 + iVar1 * 4;
            goto LAB_007e8a54;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar3);
      }
    }
  }
  return 0;
}

