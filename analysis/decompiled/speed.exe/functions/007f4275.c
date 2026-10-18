/* speed.exe 007f4275 FUN_007f4275; analysis pseudocode, not buildable source.
 * calls 007f4213 FUN_007f4213
 * calls 0085e0a0 FUN_0085e0a0
 * calls 0085df60 FID_conflict:__findnext
 * calls 0085de10 FID_conflict:__findfirst
 */

void FUN_007f4275(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  
  puVar3 = &DAT_009bb430;
  for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (*unaff_ESI == 0) {
    iVar2 = FID_conflict___findfirst(param_1);
    *unaff_ESI = iVar2;
    if (iVar2 != -1) {
      unaff_ESI[1] = 0;
      unaff_ESI[0xb] = DAT_009bb430 >> 4 & 1;
      unaff_ESI[2] = (int)&DAT_009bb444;
      if (DAT_009bb440 == 0) {
LAB_007f42eb:
        unaff_ESI[3] = 8;
        return;
      }
      iVar2 = DAT_009bb440 + -0x1c;
      unaff_ESI[4] = DAT_009bb440;
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = 0;
      }
      unaff_ESI[5] = iVar1;
      if (iVar2 < 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = 0;
      }
      unaff_ESI[3] = iVar2;
LAB_007f4339:
      iVar2 = FUN_007f4213(DAT_009bb434);
      unaff_ESI[6] = iVar2;
      iVar2 = FUN_007f4213(DAT_009bb43c);
      unaff_ESI[7] = iVar2;
      iVar2 = FUN_007f4213(DAT_009bb438);
      unaff_ESI[8] = iVar2;
      return;
    }
    iVar2 = -1;
  }
  else {
    iVar2 = FID_conflict___findnext(*unaff_ESI,&DAT_009bb430);
    if (iVar2 == 0) {
      unaff_ESI[1] = 0;
      unaff_ESI[0xb] = DAT_009bb430 >> 4 & 1;
      unaff_ESI[2] = (int)&DAT_009bb444;
      if (DAT_009bb440 == 0) goto LAB_007f42eb;
      unaff_ESI[3] = 0;
      unaff_ESI[4] = DAT_009bb440;
      unaff_ESI[5] = DAT_009bb440 + -0x1c;
      goto LAB_007f4339;
    }
    iVar2 = *unaff_ESI;
  }
  unaff_ESI[1] = 9;
  FUN_0085e0a0(iVar2);
  *unaff_ESI = 0;
  return;
}

