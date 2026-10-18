/* speed.exe 0056a930 FUN_0056a930; analysis pseudocode, not buildable source.
 * calls 00503360 FUN_00503360
 */

void __fastcall FUN_0056a930(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 local_4;
  
  pcVar1 = (char *)(param_1 + 0x108);
  iVar2 = 4;
  do {
    if (*pcVar1 != '\0') {
      local_4 = *(undefined4 *)(pcVar1 + -4);
      FUN_00503360(&local_4,1);
      pcVar1[-0xffffffff00000004] = '\0';
      pcVar1[-0xffffffff00000003] = '\0';
      pcVar1[-0xffffffff00000002] = '\0';
      pcVar1[-0xffffffff00000001] = '\0';
      *pcVar1 = '\0';
    }
    pcVar1 = pcVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

