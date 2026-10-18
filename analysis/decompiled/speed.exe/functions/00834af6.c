/* speed.exe 00834af6 FUN_00834af6; analysis pseudocode, not buildable source.
 * calls 00834a70 FUN_00834a70
 * calls 00831d8f FUN_00831d8f
 */

void FUN_00834af6(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_c;
  uint local_8;
  
  if (DAT_009c2be8 != (code *)0x0) {
    FUN_00831d8f(param_1,&local_c);
    local_8 = (uint)*(byte *)(param_2 + 7);
    if (local_8 != 0) {
      pcVar3 = (char *)(((uint)*(byte *)(param_2 + 6) * 2 + 3 & 0xfffffffc) + param_2 + 0xe);
      do {
        bVar1 = pcVar3[-1];
        if (((*pcVar3 == '\0') || (*pcVar3 == '\x03')) &&
           (iVar2 = FUN_00834a70((uint)bVar1), iVar2 != 0)) {
          (*DAT_009c2be8)(param_1,pcVar3[-2],*(undefined4 *)(param_4 + (uint)bVar1 * 4),local_c);
        }
        pcVar3 = pcVar3 + 3;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return;
}

