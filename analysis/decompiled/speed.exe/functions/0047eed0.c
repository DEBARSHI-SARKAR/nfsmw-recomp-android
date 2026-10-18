/* speed.exe 0047eed0 FUN_0047eed0; analysis pseudocode, not buildable source.
 * calls 0045e240 FUN_0045e240
 */

void FUN_0047eed0(void)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *unaff_ESI;
  undefined1 auStack_40 [64];
  
  *unaff_ESI = 0x3f800000;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0x3f800000;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0x3f800000;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0x3f800000;
  if ((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*(int *)*DAT_0092d87c + 4))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x40))(auStack_40);
      FUN_0045e240();
      pfVar4 = (float *)(**(code **)(*piVar3 + 0x20))();
      fVar1 = *pfVar4;
      fVar2 = pfVar4[1];
      unaff_ESI[0xc] = pfVar4[2];
      unaff_ESI[0xd] = -fVar1;
      unaff_ESI[0xe] = fVar2;
    }
  }
  return;
}

