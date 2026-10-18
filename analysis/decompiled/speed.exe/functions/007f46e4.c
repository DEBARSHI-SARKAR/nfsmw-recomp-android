/* speed.exe 007f46e4 FUN_007f46e4; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f6310 FUN_007f6310
 */

void __thiscall FUN_007f46e4(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  pcVar2 = (char *)(param_1 + 0x14c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = (char *)(param_1 + 0xb4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  puVar3 = (undefined4 *)(param_1 + 0x16c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _strncpy((char *)(param_1 + 0x14c),param_2,0x1f);
  _strncpy((char *)(param_1 + 0xb4),param_2,0x1f);
  FUN_007f6310();
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 0x40;
  return;
}

