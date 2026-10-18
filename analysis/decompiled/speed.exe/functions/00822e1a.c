/* speed.exe 00822e1a FUN_00822e1a; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 */

void FUN_00822e1a(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  
  pfVar7 = (float *)(param_1 * 0x5c + DAT_009c2520);
  iVar6 = 0;
  if (0 < DAT_0090bd18) {
    do {
      iVar1 = iVar6 * 4;
      pfVar2 = (float *)(DAT_009c2444 + iVar6 * 4);
      iVar6 = iVar6 + 1;
      *pfVar2 = *(float *)((int)pfVar7[0xd] + iVar1) * pfVar7[0xf] + *pfVar2;
    } while (iVar6 < DAT_0090bd18);
  }
  iVar6 = 0;
  pfVar2 = pfVar7;
  if (DAT_009c2318._1_1_ != 0) {
    do {
      pfVar3 = (float *)(&DAT_009c242c + iVar6);
      iVar6 = iVar6 + 1;
      *pfVar3 = pfVar2[1] * pfVar7[0xf] + *pfVar3;
      pfVar2 = pfVar2 + 1;
    } while (iVar6 < (int)(uint)DAT_009c2318._1_1_);
  }
  do {
    pcVar4 = *(code **)((int)pfVar7[0x10] + 4);
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(pfVar7[0x10]);
    }
    fVar5 = *(float *)((int)pfVar7[0x10] + 8);
    FUN_0081eae9(pfVar7[0x10]);
    pfVar7[0x10] = fVar5;
  } while (fVar5 != 0.0);
  *(undefined1 *)pfVar7 = 0;
  return;
}

