/* speed.exe 0072a900 FUN_0072a900; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0072a900(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_4;
  
  param_1[0x79] = 0;
  puVar2 = param_1 + 0x74;
  puVar1 = param_1 + 0x11;
  local_4 = 5;
  do {
    param_1 = param_1 + 3;
    *param_1 = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[3] = 0;
    puVar1[0x12] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 0x14;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

