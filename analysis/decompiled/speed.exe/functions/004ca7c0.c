/* speed.exe 004ca7c0 FUN_004ca7c0; analysis pseudocode, not buildable source.
 * calls 004ca1a0 FUN_004ca1a0
 */

int __thiscall FUN_004ca7c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004ca1a0();
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = iVar1 * 0x68;
  (&DAT_00912858)[iVar1 * 0x1a] = *param_2;
  *(undefined4 *)(&DAT_0091286c + iVar2) = param_2[5];
  (&DAT_00912860)[iVar1 * 0x1a] = param_2[2];
  (&DAT_00912864)[iVar1 * 0x1a] = param_2[3];
  *(undefined4 *)(&DAT_00912868 + iVar2) = param_2[4];
  *(undefined4 *)(&DAT_00912870 + iVar2) = param_2[6];
  (&DAT_00912874)[iVar2] = *(undefined1 *)(param_2 + 7);
  iVar1 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar1 + 1;
  return iVar1;
}

