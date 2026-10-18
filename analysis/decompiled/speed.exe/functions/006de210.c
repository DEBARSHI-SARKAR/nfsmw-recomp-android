/* speed.exe 006de210 FUN_006de210; analysis pseudocode, not buildable source.
 * calls 006db310 FUN_006db310
 * calls 006e2f50 FUN_006e2f50
 */

void FUN_006de210(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_008fadfc;
  uVar4 = DAT_008fadf8;
  uVar3 = DAT_008fadf4;
  uVar2 = DAT_008fadf0;
  uVar1 = DAT_008fade0;
  DAT_008fade0 = param_2;
  if (*(char *)(DAT_0093dec4 + 0x40) == '\0') {
    if (param_3 == 0) {
      FUN_006db310(param_1,0,param_2);
      FUN_006e2f50();
      FUN_006db310(param_1,1,param_2);
      FUN_006e2f50();
      FUN_006db310(param_1,2,param_2);
      FUN_006e2f50();
      DAT_008fade0 = uVar1;
      DAT_008fadf0 = uVar2;
      DAT_008fadf4 = uVar3;
      DAT_008fadf8 = uVar4;
      DAT_008fadfc = uVar5;
      return;
    }
    if (param_3 != 4) {
      if (param_3 != 3) {
        DAT_008fade0 = uVar1;
        return;
      }
      param_2 = 0x3f000000;
    }
  }
  FUN_006db310(param_1,param_3,param_2);
  FUN_006e2f50();
  DAT_008fadf4 = uVar3;
  DAT_008fadf0 = uVar2;
  DAT_008fadf8 = uVar4;
  DAT_008fadfc = uVar5;
  DAT_008fade0 = uVar1;
  return;
}

