/* speed.exe 007f4768 FUN_007f4768; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007f6310 FUN_007f6310
 * calls 007f437c FUN_007f437c
 */

void __thiscall FUN_007f4768(int param_1,char *param_2,int param_3)

{
  char *_Dest;
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_3 + 8);
  puVar2 = (undefined4 *)(param_1 + 0x14c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _Dest = (char *)(param_1 + 0xb4);
  pcVar3 = _Dest;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0x16c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_3 + 8) == 0) {
    _strncpy((char *)(param_1 + 0x14c),param_2,0x1f);
    _strncpy(_Dest,param_2,0x1f);
  }
  else {
    FUN_007f437c(param_2,(char *)(param_1 + 0x14c),_Dest);
  }
  pcVar3 = _Dest;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  _strncpy(_Dest,param_2,0x1f);
  FUN_007f6310();
  *(undefined4 *)(param_1 + 0x2f8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f4) = 4;
  *(undefined4 *)(param_1 + 0x6c) = 0x40;
  return;
}

