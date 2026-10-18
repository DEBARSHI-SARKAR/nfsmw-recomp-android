/* speed.exe 007f62af FUN_007f62af; analysis pseudocode, not buildable source.
 * calls 007e66e0 __strnicmp
 */

void __thiscall FUN_007f62af(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *_Str2;
  int local_8;
  
  if (*(int *)(param_1 + 0x108) == 2) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xb4) != 0) {
      local_8 = 0;
      do {
        _Str2 = (char *)(*(int *)(param_1 + 0xc0) + local_8);
        iVar1 = __strnicmp((char *)*param_2,_Str2,0x1f);
        if (iVar1 == 0) {
          _Str2[0x5c] = '\x01';
        }
        local_8 = local_8 + 0x60;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xb4));
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0x28))(param_2);
  }
  return;
}

