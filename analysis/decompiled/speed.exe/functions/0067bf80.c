/* speed.exe 0067bf80 FUN_0067bf80; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 0067b890 FUN_0067b890
 * calls 00723c90 FUN_00723c90
 */

void __fastcall FUN_0067bf80(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  
  pfVar1 = (float *)FUN_0067b890((int)*(short *)(param_1 + 8));
  fVar7 = (float10)FUN_006e8de0();
  uVar5 = 0;
  *pfVar1 = (float)fVar7;
  if (0 < *(short *)(param_1 + 0xc)) {
    piVar6 = (int *)(param_1 + 0x48);
    do {
      if (uVar5 < 0x800) {
        iVar2 = FUN_00723c90(piVar6[-3]);
        if ((iVar2 == 0) || ((~(*(byte *)(iVar2 + 4) >> 4) & 1) == 0)) {
          pfVar3 = pfVar1 + (uVar5 >> 5) + 2;
          fVar4 = (float)((uint)*pfVar3 | 1 << ((byte)uVar5 & 0x1f));
        }
        else {
          pfVar3 = pfVar1 + (uVar5 >> 5) + 2;
          fVar4 = (float)((uint)pfVar1[(uVar5 >> 5) + 2] & ~(1 << ((byte)uVar5 & 0x1f)));
        }
        *pfVar3 = fVar4;
      }
      if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar6)(1);
        *piVar6 = 0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 0x10;
    } while ((int)uVar5 < (int)*(short *)(param_1 + 0xc));
  }
  return;
}

