/* speed.exe 007f4e57 FUN_007f4e57; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f4c98 FUN_007f4c98
 * calls 007f4104 FUN_007f4104
 */

void __thiscall
FUN_007f4e57(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_1 + 0xb4);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  _strncpy((char *)(param_1 + 0xb4),param_2,0x1f);
  DAT_009bb548 = *(undefined4 *)(param_5 + 0x58);
  *(undefined4 *)(param_1 + 0x128) = param_3;
  *(undefined4 *)(param_1 + 300) = param_4;
  iVar4 = *(int *)(param_5 + 0x50);
  iVar1 = *(int *)(param_5 + 0x4c);
  uVar2 = FUN_007f4c98(param_4,iVar4);
  uVar3 = FUN_007f4c98(param_3,*(undefined4 *)(param_5 + 0x4c));
  FUN_007f4104(iVar1,iVar4,iVar1 + 0x1c + iVar4,uVar3,uVar2);
  uVar2 = FUN_007f4c98(param_1 + 0x10c,0x18);
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = uVar2;
  *(undefined4 *)(param_1 + 0x2f4) = 4;
  *(undefined4 *)(param_1 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 8;
  *(undefined4 *)(param_1 + 0x70) = 9;
  return;
}

