/* speed.exe 0077bac0 FUN_0077bac0; analysis pseudocode, not buildable source.
 * calls 0076f4a0 FUN_0076f4a0
 * calls 0076f140 FUN_0076f140
 * calls 00765c30 FUN_00765c30
 * calls 007753e0 FUN_007753e0
 * calls 0076ec70 FUN_0076ec70
 * calls 00765fd0 FUN_00765fd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0077bac0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  if (((*(char *)(param_1 + 0x51) != '\0') && (DAT_009b3829 != '\0')) &&
     (cVar3 = FUN_00765fd0(), cVar3 == '\0')) {
    if (*(int *)(param_1 + 0x7c) == 2) {
      return;
    }
    if (*(int *)(param_1 + 0x7c) == 4) {
      return;
    }
  }
  *(float *)(param_1 + 0x90) = _DAT_0089096c - *(float *)(param_1 + 0x90);
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) ^ 1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c4);
  iVar4 = *(short *)(param_1 + 0x8e) * 0x16 + DAT_009b38c0;
  FUN_0076f4a0(iVar4,uVar1,0);
  FUN_0076f4a0(iVar4,uVar1,1);
  FUN_0076f140(iVar4,1);
  FUN_0076f140(iVar4,0);
  FUN_00765c30(iVar4);
  FUN_007753e0(iVar4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0076ec70(0x40400000);
  return;
}

