/* speed.exe 0056e640 FUN_0056e640; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0056e640(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)(param_1 + 2);
  while (((*(short *)(pcVar1 + -2) != param_2 || (pcVar1[1] != param_3)) || (*pcVar1 != param_4))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 8;
    if (0x13f < iVar2) {
      return 0;
    }
  }
  return param_1 + iVar2 * 8;
}

