/* speed.exe 00407e10 FUN_00407e10; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007862d0 FUN_007862d0
 * calls 007658a0 FUN_007658a0
 * calls 0076e220 FUN_0076e220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00407e10(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  undefined1 uStack_2a7;
  undefined1 uStack_2a6;
  char cStack_2a4;
  undefined4 uStack_280;
  undefined4 uStack_278;
  short sStack_266;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086794b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x7e8) = 0;
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  iVar3 = (**(code **)(*piVar2 + 0x38))();
  if (iVar3 == 1) {
    cVar1 = (**(code **)(*piVar2 + 0xbc))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar2 + 0x20))();
      if ((((cVar1 == '\0') && (DAT_0091e000 != 0)) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) &&
         (*(char *)(DAT_0091e000 + 0x198a) != '\0')) {
        iVar3 = (**(code **)(*(int *)(param_1 + 0x4c) + 0x48))();
        if (iVar3 != 0) {
          pfVar7 = &fStack_300;
          (**(code **)(*piVar2 + 0xb8))(pfVar7);
          FUN_0077b9e0();
          puStack_8 = (undefined1 *)0x0;
          uStack_280 = 2;
          FUN_007658a0(4);
          uStack_2a7 = DAT_009b3829 != '\0';
          uVar6 = 0x3f800000;
          uVar5 = 0;
          uStack_278 = 0;
          uStack_2a6 = 0;
          cStack_2a4 = '\0';
          uVar4 = (**(code **)(*piVar2 + 0xc))(&fStack_304,0,0x3f800000);
          FUN_007862d0(uVar4,uVar5,uVar6,pfVar7);
          if (((cStack_2a4 != '\0') && (iVar3 = sStack_266 * 0x16 + DAT_009b38c0, iVar3 != 0)) &&
             ((*(ushort *)(iVar3 + 10) & 0x8000) != 0)) {
            fStack_304 = fStack_230;
            if (fStack_300 * fStack_238 + fStack_2fc * fStack_234 + fStack_2f8 * fStack_230 <
                _DAT_00890968) {
              *(undefined1 *)(param_1 + 0x7e8) = 1;
            }
          }
          uStack_4 = 0xffffffff;
          FUN_0076e220();
        }
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

