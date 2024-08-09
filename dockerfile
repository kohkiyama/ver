FROM gcc

RUN apt -y update && apt -y install git
RUN apt -y install diffutils patch

WORKDIR /mnt
