/* speed.exe 007ce100 __cfltcvt; analysis pseudocode, not buildable source.
 * calls 007cde40 __cftof
 * calls 007cdc40 __cftoe
 * calls 007ce000 __cftog
 */

/* Library Function - Single Match
    __cfltcvt
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  int unaff_EBP;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = __cftoe(arg,buffer,format,precision,unaff_EBP);
  }
  else if (sizeInBytes == 0x66) {
    eVar1 = __cftof(arg,buffer,format,unaff_EBP);
  }
  else {
    eVar1 = __cftog(arg,buffer,format,precision);
  }
  return eVar1;
}

