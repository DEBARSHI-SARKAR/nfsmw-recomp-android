/* speed.exe 0060d820 FUN_0060d820; analysis pseudocode, not buildable source.
 * calls 0077ba80 FUN_0077ba80
 * calls 005d51f0 FUN_005d51f0
 * calls 0077b9e0 FUN_0077b9e0
 * calls 005fad10 FUN_005fad10
 * calls 0076e220 FUN_0076e220
 * calls 007658a0 FUN_007658a0
 * calls 0040fe20 FUN_0040fe20
 * calls 005dc750 FUN_005dc750
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 007862d0 FUN_007862d0
 * calls 005fae00 FUN_005fae00
 * calls 00778360 FUN_00778360
 */

void FUN_0060d820(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float local_338;
  float fStack_334;
  float fStack_330;
  int *local_328;
  float local_324;
  float fStack_320;
  undefined1 local_318 [12];
  undefined1 local_30c [12];
  undefined1 auStack_300 [132];
  undefined4 local_27c;
  undefined4 local_274;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  undefined1 local_238 [556];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087663b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005fad10(local_30c);
  FUN_005fae00(local_318);
  FUN_0077b9e0();
  iVar5 = 0;
  local_4 = 0;
  local_27c = 2;
  FUN_007658a0(4);
  iVar7 = 0;
  fVar6 = 0.0;
  local_274 = 6;
  local_338 = 0.0;
  FUN_007862d0(local_30c,local_318,0,0x3f800000);
  FUN_0077ba80();
  cVar2 = FUN_00778360(0xffffffff);
  while (cVar2 != '\0') {
    iVar7 = iVar7 + 1;
    cVar2 = FUN_00778360(0xffffffff);
  }
  FUN_007862d0(local_30c,local_318,0,0x3f800000);
  FUN_0077ba80();
  cVar2 = FUN_00778360(1);
  fVar1 = local_338;
  while (cVar2 != '\0') {
    fVar6 = (float)((int)fVar6 + 1);
    cVar2 = FUN_00778360(1);
    fVar1 = fVar6;
  }
  local_338 = fVar1;
  do {
    local_328 = (int *)FUN_005dbed0(iVar5);
    if ((*local_328 == 0) ||
       (iVar3 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*local_328), iVar3 == 0))
    {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar3 + 4);
    }
    piVar8 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      piVar8 = (int *)FUN_005d59f0(&LAB_004040e0);
    }
    FUN_007862d0(local_30c,local_318,0,0x3f800000);
    FUN_0077ba80();
    FUN_0040fe20(local_238,&local_324);
    if ((SUB41(fVar6,0) + '\x01' + (char)iVar7 & 1U) == 0) {
      if (iVar5 != 0) {
        if (iVar7 < (int)local_338) goto LAB_0060da15;
      }
      else if ((int)local_338 < iVar7) {
        uVar9 = 0xffffffff;
        goto LAB_0060da17;
      }
    }
    else if (iVar5 != 0) {
      FUN_00778360(1);
      if (iVar7 == 0) {
LAB_0060da15:
        uVar9 = 1;
        goto LAB_0060da17;
      }
    }
    else if (iVar7 != 0) {
      uVar9 = 0xffffffff;
LAB_0060da17:
      FUN_00778360(uVar9);
    }
    piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
    iVar3 = (**(code **)(*piVar4 + 0x48))(auStack_300);
    fVar1 = -*(float *)(iVar3 + 8);
    local_338 = (float)local_328 * fVar1 + fStack_260;
    fStack_334 = local_324 * fVar1 + fStack_25c;
    fStack_330 = fStack_320 * fVar1 + fStack_258;
    (**(code **)(*piVar8 + 0x68))(&local_338,&local_328);
    FUN_005dc750(&fStack_334,&local_324);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      local_4 = 0xffffffff;
      FUN_0076e220();
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

