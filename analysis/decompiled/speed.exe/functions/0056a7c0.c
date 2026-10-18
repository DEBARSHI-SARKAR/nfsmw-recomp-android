/* speed.exe 0056a7c0 FUN_0056a7c0; analysis pseudocode, not buildable source.
 * calls 00525a00 FUN_00525a00
 * calls 00515b90 FUN_00515b90
 * calls 00508b10 FUN_00508b10
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_0056a7c0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x134);
  *(undefined1 *)(param_1 + 0x130) = 0;
  local_4 = param_1;
  if (-1 < iVar1) {
    FUN_00515b90(*(undefined4 *)(param_1 + 0x100 + iVar1 * 0xc),
                 *(undefined4 *)(param_1 + 0x104 + iVar1 * 0xc));
    FUN_00514cc0(*(undefined4 *)(param_1 + iVar1 * 0xc + 0x100));
    *(undefined1 *)(param_1 + (iVar1 * 3 + 0x42) * 4) = 1;
    *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  }
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x108);
  while ((*(int *)(pcVar2 + -4) == 0 || (*pcVar2 != '\0'))) {
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0xc;
    if (3 < iVar1) {
      FUN_00525a00();
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(int *)(param_1 + 0x134) = iVar1;
  local_4 = *(int *)(param_1 + 0x104 + iVar1 * 0xc);
  FUN_00508b10(&local_4,1,&LAB_0057ada0,param_1,7);
  return;
}

