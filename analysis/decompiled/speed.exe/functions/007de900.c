/* speed.exe 007de900 __ld12told; analysis pseudocode, not buildable source.
 * calls 007de3f0 __RoundMan
 */

/* Library Function - Single Match
    __ld12told
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *_Ifp,_LDOUBLE *_Ld)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  INTRNCVT_STATUS local_c;
  ushort local_8;
  
  local_c = INTRNCVT_OK;
  local_8 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  uVar1 = *(ushort *)(_Ifp->ld12 + 10);
  local_18 = *(undefined4 *)(_Ifp->ld12 + 6);
  local_14 = *(undefined4 *)(_Ifp->ld12 + 2);
  local_10 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  iVar2 = __RoundMan(&local_18,0x40);
  if (iVar2 != 0) {
    local_18 = 0x80000000;
    local_8 = local_8 + 1;
  }
  if (local_8 == 0x7fff) {
    local_c = INTRNCVT_OVERFLOW;
  }
  *(undefined4 *)(_Ld->ld + 4) = local_18;
  *(undefined4 *)_Ld->ld = local_14;
  *(ushort *)(_Ld->ld + 8) = uVar1 & 0x8000 | local_8;
  return local_c;
}

