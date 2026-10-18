/* speed.exe 00606e60 FUN_00606e60; analysis pseudocode, not buildable source.
 */

void FUN_00606e60(void)

{
  int in_EAX;
  undefined4 *unaff_ESI;
  int iVar1;
  int local_4;
  
  if ((in_EAX != 0) && (in_EAX + 0x10 != 0)) {
    iVar1 = *(int *)(in_EAX + 0xc) + 1;
    local_4 = iVar1;
    (*(code *)unaff_ESI[1])(*unaff_ESI,&local_4,4,unaff_ESI[2]);
    (*(code *)unaff_ESI[1])(*unaff_ESI,in_EAX + 0x10,iVar1,unaff_ESI[2]);
    return;
  }
  local_4 = 0;
  (*(code *)unaff_ESI[1])(*unaff_ESI,&local_4,4,unaff_ESI[2]);
  return;
}

