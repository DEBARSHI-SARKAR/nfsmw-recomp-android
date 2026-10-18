/* speed.exe 005e38d0 FUN_005e38d0; analysis pseudocode, not buildable source.
 * calls 00452880 FUN_00452880
 * calls 005dc970 FUN_005dc970
 * calls 00659260 FUN_00659260
 * calls 005d94d0 FUN_005d94d0
 */

void __thiscall FUN_005e38d0(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_4;
  
  uVar2 = 0;
  if (*param_1 + param_1[1] != 0) {
    local_4 = 0;
    do {
      if (uVar2 < *param_1) {
        uVar3 = param_1[3] + local_4;
      }
      else {
        uVar3 = param_1[(uVar2 - *param_1) + 4];
      }
      if ((*(int *)(uVar3 + 0xc) == param_2) && (iVar1 = *(int *)(uVar3 + 8), iVar1 != 0)) {
        FUN_005d94d0();
        FUN_00452880(0x14,0);
        (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(iVar1,0x14,0);
        *(undefined4 *)(uVar3 + 8) = 0;
      }
      uVar2 = uVar2 + 1;
      local_4 = local_4 + 0x14;
    } while (uVar2 < *param_1 + param_1[1]);
  }
  uVar2 = param_1[0xb];
  if ((uVar2 != 0) && (param_2 == *(int *)(uVar2 + 0xc))) {
    if (*(char *)(uVar2 + 0x1d) != '\0') {
      FUN_005dc970(uVar2);
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  return;
}

