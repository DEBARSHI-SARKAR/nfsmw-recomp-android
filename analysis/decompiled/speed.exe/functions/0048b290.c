/* speed.exe 0048b290 FUN_0048b290; analysis pseudocode, not buildable source.
 * calls 0048b190 FUN_0048b190
 * calls 00488f70 FUN_00488f70
 * calls 005caea0 FUN_005caea0
 * calls 005cb0b0 FUN_005cb0b0
 * calls 00487160 FUN_00487160
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0048b290(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,float param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 uStack_25c;
  float fStack_258;
  undefined4 uStack_254;
  float fStack_250;
  float fStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [40];
  undefined1 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_84 [20];
  undefined4 auStack_70 [9];
  undefined1 uStack_4c;
  undefined4 uStack_48;
  
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(param_1 + 0x48);
  piVar3 = *(int **)(iVar2 + 0x10);
  piVar4 = *(int **)(iVar1 + 0x10);
  if (*(char *)(iVar1 + 0x14) == '\0') {
    if (*(char *)(iVar2 + 0x14) != '\0') {
      FUN_0048b190(iVar1,param_6,param_7,param_4,param_5 * _DAT_00890da8);
      puVar6 = (undefined4 *)(**(code **)(*piVar4 + 8))();
      uStack_25c = *puVar6;
      fStack_258 = (float)puVar6[1];
      uStack_254 = puVar6[2];
      FUN_005caea0(param_7,&uStack_25c,&uStack_25c);
      if (fStack_258 * param_5 <= _DAT_00890968) {
        return 1;
      }
      fStack_258 = 0.0;
      FUN_005caea0(param_6,&uStack_25c,&uStack_25c);
      (**(code **)(*piVar4 + 0xc))(&uStack_25c);
      return 1;
    }
    fVar7 = (float10)(**(code **)(*piVar4 + 0x2c))();
    fStack_24c = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar3 + 0x2c))();
    fStack_250 = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar4 + 0x2c))();
    fStack_250 = (float)((float10)fStack_24c / (fVar7 + (float10)fStack_250));
    FUN_0048b190(*(undefined4 *)(param_1 + 0x44),param_6,param_7,param_4,
                 -((_DAT_0089096c - fStack_250) * param_5));
    FUN_0048b190(*(undefined4 *)(param_1 + 0x48),param_6,param_7,param_4,fStack_250 * param_5);
    uStack_248 = 0;
    uStack_244 = 0;
    uStack_240 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_23c = *param_2;
    uStack_238 = param_2[1];
    uStack_234 = param_2[2];
    FUN_005caea0(param_6,&uStack_23c,&uStack_23c);
    FUN_005cb0b0(param_6,param_3,param_4,&uStack_248);
    FUN_00487160(piVar4);
    uStack_160 = *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x14);
    uStack_15c = 0;
    FUN_00487160(piVar3);
    uStack_4c = *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x14);
    uStack_48 = 0;
    cVar5 = FUN_00488f70(auStack_228,&uStack_248,0x20);
    if (cVar5 == '\0') {
      return 1;
    }
    (**(code **)(*piVar4 + 0x14))(auStack_190);
    (**(code **)(*piVar4 + 0xc))(auStack_188);
    (**(code **)(*piVar3 + 0x14))(auStack_84);
    puVar6 = auStack_70;
  }
  else {
    FUN_0048b190(iVar2,param_6,param_7,param_4,param_5);
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 8))();
    uStack_25c = *puVar6;
    fStack_258 = (float)puVar6[1];
    uStack_254 = puVar6[2];
    FUN_005caea0(param_7,&uStack_25c,&uStack_25c);
    if (_DAT_00890968 <= fStack_258 * param_5) {
      return 1;
    }
    fStack_258 = 0.0;
    FUN_005caea0(param_6,&uStack_25c,&uStack_25c);
    puVar6 = &uStack_25c;
  }
  (**(code **)(*piVar3 + 0xc))(puVar6);
  return 1;
}

