/* speed.exe 00862640 FUN_00862640; analysis pseudocode, not buildable source.
 * calls 007ec1a7 FUN_007ec1a7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00862640(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  char *local_24;
  uint *local_20;
  uint local_1c;
  undefined4 local_18;
  uint *local_14;
  uint local_10 [3];
  
  if ((DAT_009c3f58 == (int *)0x0) && (param_1 < 0x101)) {
    local_10[2] = 0;
    local_10[0] = param_2 >> 6 & 4;
    local_1c = param_2 >> 9 & 2;
    local_14 = local_10;
    local_20 = &local_1c;
    local_18 = DAT_00907704;
    local_2c = &local_28;
    local_28 = 1;
    local_10[1] = 1;
    local_38 = &local_34;
    local_40 = 6;
    local_3c = 0x1f2;
    local_34 = 5;
    local_30 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\hlafile.cpp";
    local_24 = "ASYNCFILE";
    DAT_009c3f54 = param_1;
    _DAT_009c3f4c = (int *)(**(code **)*DAT_009076dc)(param_1 * 0x30,&local_40);
    _DAT_009c3f50 = _DAT_009c3f4c + param_1 * 0xc + -0xc;
    DAT_009c3f58 = _DAT_009c3f4c;
    FUN_007ec1a7();
    piVar2 = DAT_009c3f58;
    iVar3 = 0;
    piVar1 = DAT_009c3f58;
    if (0 < param_1) {
      do {
        *piVar1 = iVar3;
        piVar1[7] = 0;
        piVar1[1] = (int)(piVar1 + 0xc);
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 0xc;
      } while (iVar3 < param_1);
    }
    piVar2[param_1 * 0xc + -0xb] = 0;
  }
  return;
}

