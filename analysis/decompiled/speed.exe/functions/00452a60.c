/* speed.exe 00452a60 FUN_00452a60; analysis pseudocode, not buildable source.
 */

void FUN_00452a60(void)

{
  char *in_EAX;
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte *unaff_ESI;
  
  bVar3 = *unaff_ESI;
  bVar1 = bVar3 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x57;
  }
  *in_EAX = cVar2;
  bVar3 = bVar3 & 0xf;
  if (bVar3 < 10) {
    cVar2 = bVar3 + 0x30;
  }
  else {
    cVar2 = bVar3 + 0x57;
  }
  in_EAX[1] = cVar2;
  bVar3 = unaff_ESI[1];
  bVar1 = bVar3 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x57;
  }
  in_EAX[2] = cVar2;
  bVar3 = bVar3 & 0xf;
  if (bVar3 < 10) {
    cVar2 = bVar3 + 0x30;
  }
  else {
    cVar2 = bVar3 + 0x57;
  }
  in_EAX[3] = cVar2;
  bVar3 = unaff_ESI[2];
  bVar1 = bVar3 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x57;
  }
  in_EAX[4] = cVar2;
  bVar3 = bVar3 & 0xf;
  if (bVar3 < 10) {
    cVar2 = bVar3 + 0x30;
  }
  else {
    cVar2 = bVar3 + 0x57;
  }
  in_EAX[5] = cVar2;
  bVar3 = unaff_ESI[3];
  bVar1 = bVar3 >> 4;
  if (bVar1 < 10) {
    cVar2 = bVar1 + 0x30;
  }
  else {
    cVar2 = bVar1 + 0x57;
  }
  in_EAX[6] = cVar2;
  bVar3 = bVar3 & 0xf;
  if (9 < bVar3) {
    in_EAX[7] = bVar3 + 0x57;
    in_EAX[8] = '\0';
    return;
  }
  in_EAX[7] = bVar3 + 0x30;
  in_EAX[8] = '\0';
  return;
}

