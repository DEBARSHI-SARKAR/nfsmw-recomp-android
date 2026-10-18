/* speed.exe 00822240 FUN_00822240; analysis pseudocode, not buildable source.
 */

void FUN_00822240(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = *(char *)(param_1 + 0x17);
  while ('\0' < cVar1) {
    *(char *)(param_1 + 0x17) = *(char *)(param_1 + 0x17) + -1;
    local_18 = param_3;
    local_c = param_2;
    local_14 = *(undefined4 *)(param_1 + 0x34 + *(char *)(param_1 + 0x17) * 4);
    local_10 = *(undefined4 *)(param_1 + 0x44 + *(char *)(param_1 + 0x17) * 4);
    iVar2 = 0;
    if ('\0' < DAT_009c218e) {
      do {
        (*(code *)(&DAT_009c21c4)[iVar2])(&local_18);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_009c218e);
    }
    cVar1 = *(char *)(param_1 + 0x17);
  }
  return;
}

