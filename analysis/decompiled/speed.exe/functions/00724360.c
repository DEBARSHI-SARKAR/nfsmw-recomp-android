/* speed.exe 00724360 FUN_00724360; analysis pseudocode, not buildable source.
 * calls 007242a0 FUN_007242a0
 */

int FUN_00724360(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_009ae278 == '\0') {
    puVar3 = &DAT_009ab6b8;
    for (iVar2 = 0xaf0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_009ae278 = '\x01';
    iVar2 = 0;
    do {
      iVar1 = FUN_007242a0(iVar2,param_2);
      if (iVar1 != iVar2) {
        (&DAT_009ab6b8)[iVar1] = iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xaf0);
  }
  iVar2 = (&DAT_009ab6b8)[param_1];
  if ((&DAT_009ab6b8)[param_1] == 0) {
    iVar2 = param_1;
  }
  return iVar2;
}

