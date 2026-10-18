/* speed.exe 004f4fc0 FUN_004f4fc0; analysis pseudocode, not buildable source.
 * calls 00595ed0 FUN_00595ed0
 */

void __fastcall FUN_004f4fc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(&DAT_008f2090 + *(int *)(param_1 + 0x150) * 0x18);
  if (-1 < iVar1) {
    if (DAT_009123d0 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_009123d4 - DAT_009123d0 >> 2;
    }
    if (iVar1 <= iVar3) {
      puVar2 = *(undefined4 **)(DAT_009123d0 + iVar1 * 4);
      FUN_00595ed0(*puVar2,puVar2[1],puVar2[2]);
      *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x40;
    }
  }
  return;
}

