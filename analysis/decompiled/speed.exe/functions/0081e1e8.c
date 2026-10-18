/* speed.exe 0081e1e8 FUN_0081e1e8; analysis pseudocode, not buildable source.
 */

void FUN_0081e1e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_009c1f44)[param_1];
  if (param_2 == *(char *)(iVar1 + 0x42)) {
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) - param_3;
    iVar2 = DAT_009c1c40;
    if (*(int *)(iVar1 + 0x58) != 0) {
      (&DAT_009c1c44)[DAT_009c1c40 * 4] = 0;
      (&DAT_009c1c46)[iVar2 * 4] = (short)param_1;
      (&DAT_009c1c48)[iVar2 * 2] = param_3;
      DAT_009c1c40 = DAT_009c1c40 + 1;
    }
  }
  return;
}

