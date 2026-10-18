/* speed.exe 007e8ea0 FUN_007e8ea0; analysis pseudocode, not buildable source.
 * calls 007eb270 FUN_007eb270
 * calls 007eb5e0 FUN_007eb5e0
 * calls 007eb430 FUN_007eb430
 * calls 007ebab0 FUN_007ebab0
 * calls 007eb6e0 FUN_007eb6e0
 * calls 007eb350 FUN_007eb350
 * calls 007eb500 FUN_007eb500
 * calls 007e8ca0 FUN_007e8ca0
 */

undefined4 __thiscall FUN_007e8ea0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int local_8;
  
  local_8 = 0;
  puVar6 = (undefined1 *)&param_2;
  iVar1 = FUN_007e8ca0();
  iVar3 = 0;
  while (iVar5 = iVar3, param_1 != 0) {
    iVar2 = FUN_007e8ca0();
    iVar4 = param_1;
    if (iVar2 == iVar1) {
      iVar4 = param_3;
      local_8 = param_1;
    }
    if (iVar2 < 0x11) {
      if (iVar2 == 0x10) {
        iVar5 = ((uint)(puVar6 + 0x2f) & 0xfffffff0) - 0x20;
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            *(undefined4 *)(iVar3 + 4) = 0;
          }
          else {
            *(int *)(iVar3 + 4) = iVar5 - iVar3;
          }
        }
        FUN_007eb500(iVar5);
        puVar6 = (undefined1 *)(((uint)(puVar6 + 0x2f) & 0xfffffff0) + *(int *)(iVar4 + 0xc));
      }
      else if (iVar2 != 1) {
        if (iVar2 == 2) {
          iVar5 = ((uint)(puVar6 + 0x9f) & 0xffffff80) - 0x20;
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              *(undefined4 *)(iVar3 + 4) = 0;
            }
            else {
              *(int *)(iVar3 + 4) = iVar5 - iVar3;
            }
          }
          FUN_007eb270(iVar5);
          puVar6 = (undefined1 *)(((uint)(puVar6 + 0x9f) & 0xffffff80) + *(int *)(iVar4 + 0xc));
        }
        else {
          if (iVar2 != 4) {
            return 0;
          }
          iVar5 = ((uint)(puVar6 + 0x2f) & 0xfffffff0) - 0x20;
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              *(undefined4 *)(iVar3 + 4) = 0;
            }
            else {
              *(int *)(iVar3 + 4) = iVar5 - iVar3;
            }
          }
          FUN_007eb350(iVar5);
          puVar6 = (undefined1 *)(((uint)(puVar6 + 0x2f) & 0xfffffff0) + *(int *)(iVar4 + 0xc));
        }
      }
    }
    else if (iVar2 == 0x20) {
      iVar5 = ((uint)(puVar6 + 0x1f) & 0xfffffff0) - 0x10;
      if (iVar3 != 0) {
        if (iVar5 == 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          *(int *)(iVar3 + 4) = iVar5 - iVar3;
        }
      }
      FUN_007eb6e0(iVar5);
      puVar6 = (undefined1 *)(((uint)(puVar6 + 0x1f) & 0xfffffff0) + *(int *)(iVar4 + 0xc));
    }
    else if (iVar2 == 0x80) {
      iVar5 = ((uint)(puVar6 + 0x1f) & 0xfffffff0) - 0x10;
      if (iVar3 != 0) {
        if (iVar5 == 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          *(int *)(iVar3 + 4) = iVar5 - iVar3;
        }
      }
      FUN_007eb5e0(iVar5);
      puVar6 = (undefined1 *)(((uint)(puVar6 + 0x1f) & 0xfffffff0) + *(int *)(iVar4 + 0xc));
    }
    else {
      if (iVar2 != 0x100) {
        return 0;
      }
      iVar5 = ((uint)(puVar6 + 0x2f) & 0xfffffff0) - 0x20;
      if (iVar3 != 0) {
        if (iVar5 == 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          *(int *)(iVar3 + 4) = iVar5 - iVar3;
        }
      }
      FUN_007eb430(iVar5);
      iVar3 = FUN_007ebab0();
      puVar6 = (undefined1 *)(iVar5 + iVar3);
    }
    iVar3 = iVar5;
    if (iVar2 == iVar1) {
      if (*(int *)(local_8 + 4) == 0) {
        param_1 = 0;
        local_8 = 0;
      }
      else {
        param_1 = *(int *)(local_8 + 4) + local_8;
        local_8 = 0;
      }
    }
    else {
      if (*(int *)(iVar4 + 4) == 0) break;
      param_1 = iVar4 + *(int *)(iVar4 + 4);
    }
  }
  *(undefined4 *)(iVar5 + 4) = 0;
  return 1;
}

