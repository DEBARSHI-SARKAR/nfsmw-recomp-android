/* speed.exe 005739d0 FUN_005739d0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514da0 FUN_00514da0
 * calls 00514d10 FUN_00514d10
 * calls 00514cc0 FUN_00514cc0
 */

void __thiscall FUN_005739d0(int param_1,int param_2,char param_3)

{
  char cVar1;
  
  if (param_2 == 0) {
    FUN_00514c70(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  FUN_00514cc0(*(undefined4 *)(param_1 + 0xc));
  if ((*(char *)(param_2 + 0x15) == '\0') && (*(char *)(param_2 + 0x14) != '\0')) {
    if (param_3 == '\0') {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
      if (cVar1 != '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10)
                     ,1);
        return;
      }
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x10) + 8),1)
        ;
        return;
      }
    }
    else {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
                     1);
        return;
      }
    }
  }
  else {
    cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 0x10) + 4));
    if (cVar1 == '\0') {
      FUN_00514d10(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),1);
    }
  }
  return;
}

