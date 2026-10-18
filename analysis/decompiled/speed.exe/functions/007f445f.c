/* speed.exe 007f445f FUN_007f445f; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 */

void __thiscall
FUN_007f445f(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  pcVar2 = (char *)(param_1 + 0x14c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  puVar3 = (undefined4 *)(param_1 + 0xb4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  _strncpy((char *)(param_1 + 0x14c),param_2,0x1f);
  _strncpy((char *)(param_1 + 0xb4),param_2,0x1f);
  DAT_009bb548 = param_5;
  *(undefined4 *)(param_1 + 0x128) = param_3;
  *(undefined4 *)(param_1 + 300) = param_4;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f4) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 0x10;
  *(undefined4 *)(param_1 + 0x70) = 0xf;
  return;
}

