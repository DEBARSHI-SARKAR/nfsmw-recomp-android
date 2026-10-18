/* speed.exe 006c9d00 FUN_006c9d00; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_006c9d00(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if ((*(char *)(param_1 + 0x21) == '\0') && (*(char *)(param_1 + 0x22) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x24) == '\0') && (*(char *)(param_1 + 0x25) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(param_1 + 0x27) == '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((!bVar1) && (!bVar2)) && (*(int *)(param_1 + 0x1c) == 0)) &&
     (((!bVar3 && (*(int *)(param_1 + 0x14) == 0)) && (*(int *)(param_1 + 0x18) == 0)))) {
    return 0;
  }
  return 1;
}

