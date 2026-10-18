/* speed.exe 007f4414 FUN_007f4414; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

void __thiscall FUN_007f4414(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_1 + 0xb4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  _strncpy((char *)(param_1 + 0xb4),param_2,0x1f);
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 4;
  *(undefined4 *)(param_1 + 0x70) = 9;
  return;
}

