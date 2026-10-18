/* speed.exe 00789ec0 FUN_00789ec0; analysis pseudocode, not buildable source.
 * calls 00781580 FUN_00781580
 * calls 00780ba0 FUN_00780ba0
 * calls 00789320 FUN_00789320
 * calls 00763000 FUN_00763000
 * calls 00781670 FUN_00781670
 * calls 00781f70 FUN_00781f70
 * calls 00782ab0 FUN_00782ab0
 * calls 00780a20 FUN_00780a20
 * calls 0076c500 FUN_0076c500
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00789ec0(undefined4 *param_1,undefined4 *param_2,float param_3,char param_4)

{
  float fVar1;
  char cVar2;
  uint extraout_EDX;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(DAT_009b3918 + 0x14) == 0) {
    FUN_00780ba0(0,0);
    FUN_00781580();
    FUN_00781f70(0);
    FUN_00780a20(0,0);
    return;
  }
  uVar3 = param_1[0x22];
  uVar4 = uVar3 & 0x10;
  if (*(char *)(param_1 + 0x20) != '\0') {
    cVar2 = FUN_00763000(param_2,param_3);
    uVar3 = extraout_EDX;
    if (cVar2 != '\0') goto LAB_00789f2e;
  }
  uVar4 = uVar4 | uVar3 & 0xc;
LAB_00789f2e:
  if (uVar4 != 0) {
    FUN_00782ab0(uVar4);
    FUN_00781670(uVar4);
    if (uVar4 == param_1[0x22]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_1[3] = param_3;
      if (param_4 == '\0') {
        fVar1 = param_3 * _DAT_008910c4;
        param_1[8] = *param_1;
        param_1[0xb] = fVar1;
        param_1[9] = param_1[1];
        param_1[10] = param_1[2];
      }
      else {
        FUN_0076c500(*(undefined1 *)(param_1 + 0x20),param_3,param_1 + 0xb);
      }
    }
    FUN_00789320(uVar4);
  }
  if (param_4 != '\0') {
    param_1[0xc] = *param_2;
    param_1[0xd] = param_2[1];
    param_1[0xe] = param_2[2];
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_3;
  }
  return;
}

