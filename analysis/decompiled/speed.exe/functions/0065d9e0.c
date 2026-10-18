/* speed.exe 0065d9e0 FUN_0065d9e0; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 0065c2e0 FUN_0065c2e0
 */

void __thiscall FUN_0065d9e0(int param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_4;
  
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)((*(uint *)(param_1 + 0x38) & 0x1f) + 0x18 + param_1) = param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    _param_2 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      local_4 = 0;
      do {
        pcVar4 = (char *)(*(int *)(param_1 + 0x10) + local_4);
        uVar1 = FUN_00460c50(pcVar4);
        if (uVar1 <= *(uint *)(param_1 + 0x38)) {
          iVar2 = 0;
          if (0 < (int)uVar1) {
            iVar3 = (*(uint *)(param_1 + 0x38) - uVar1) - (int)pcVar4;
            do {
              if (*pcVar4 != *(char *)(((uint)(pcVar4 + iVar3) & 0x1f) + 0x18 + param_1))
              goto LAB_0065da60;
              iVar2 = iVar2 + 1;
              pcVar4 = pcVar4 + 1;
            } while (iVar2 < (int)uVar1);
          }
          FUN_0065c2e0(_param_2);
        }
LAB_0065da60:
        _param_2 = _param_2 + 1;
        local_4 = local_4 + 0x34;
      } while (_param_2 < *(uint *)(param_1 + 0x14));
    }
  }
  return;
}

