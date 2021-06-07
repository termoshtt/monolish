// this source code is generated by include/mpi/gen_all.sh
#pragma once
/**
 * @brief
 * C++ template MPI class, Functions of this class do nothing when MPI is
 * disabled.
 * Functions in this class are under development. Many BLAS functions don't
 * support MPI.
 */
namespace monolish::mpi {
/**
 * @brief MPI class (singleton)
 */
class Comm {
private:
  /**
   * @brief MPI communicator, MPI_COMM_WORLD
   */
  MPI_Comm comm = 0;
  int rank = 0;
  int size = 1;

  Comm(){};

  ~Comm(){};

public:
  Comm(const Comm &) = delete;
  Comm &operator=(const Comm &) = delete;
  Comm(Comm &&) = delete;
  Comm &operator=(Comm &&) = delete;

  static Comm &get_instance() {
    static Comm instance;
    return instance;
  }

  /**
   * @brief Initialize the MPI execution environment
   */
  void Init();

  /**
   * @brief Initialize the MPI execution environment
   * @param argc Pointer to the number of arguments
   * @param argv Pointer to the argument vector
   * */
  void Init(int argc, char **argv);

  /**
   * @brief Indicates whether MPI_Init has been called
   * @return true: initialized, false: not initialized
   * */
  bool Initialized() const;

  ///////////////////////////////////////////

  /**
   * @brief get communicator
   * @return MPI_COMM_WORLD
   */
  [[nodiscard]] MPI_Comm get_comm() const { return comm; }

  /**
   * @brief set communicator
   */
  void set_comm(MPI_Comm external_comm);

  /**
   * @brief Terminates MPI execution environment
   * */
  void Finalize();

  /**
   * @brief get my rank number
   * @return rank number
   */
  [[nodiscard]] int get_rank();

  /**
   * @brief get the number of processes
   * @return the number of prodessed
   */
  [[nodiscard]] int get_size();

  ///////////////////////////////////////////

  /**
   * @brief Blocks until all processes in the communicator have reached this routine.
   */
  void Barrier() const;



  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] double Allreduce (double val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] float Allreduce (float val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] int Allreduce (int val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] size_t Allreduce (size_t val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] double Allreduce_sum (double val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] float Allreduce_sum (float val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] int Allreduce_sum (int val) const;

  /**
  * @brief MPI_Allreduce (MPI_SUM) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] size_t Allreduce_sum (size_t val) const;

  /**
  * @brief MPI_Allreduce (MPI_PROD) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] double Allreduce_prod (double val) const;

  /**
  * @brief MPI_Allreduce (MPI_PROD) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] float Allreduce_prod (float val) const;

  /**
  * @brief MPI_Allreduce (MPI_PROD) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] int Allreduce_prod (int val) const;

  /**
  * @brief MPI_Allreduce (MPI_PROD) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] size_t Allreduce_prod (size_t val) const;

  /**
  * @brief MPI_Allreduce (MPI_MAX) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] double Allreduce_max (double val) const;

  /**
  * @brief MPI_Allreduce (MPI_MAX) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] float Allreduce_max (float val) const;

  /**
  * @brief MPI_Allreduce (MPI_MAX) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] int Allreduce_max (int val) const;

  /**
  * @brief MPI_Allreduce (MPI_MAX) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] size_t Allreduce_max (size_t val) const;

  /**
  * @brief MPI_Allreduce (MPI_MIN) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] double Allreduce_min (double val) const;

  /**
  * @brief MPI_Allreduce (MPI_MIN) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] float Allreduce_min (float val) const;

  /**
  * @brief MPI_Allreduce (MPI_MIN) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] int Allreduce_min (int val) const;

  /**
  * @brief MPI_Allreduce (MPI_MIN) for scalar. Combines values from all processes and distributes the result back to all processes.
  * @param val scalar value
  */ 
[[nodiscard]] size_t Allreduce_min (size_t val) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param val scalar value
  * @param root root rank number
  * @param gpu_sync sync gpu data. This option does not work because scalar is automatically synchronized.
  */
  void Bcast(double &val, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param val scalar value
  * @param root root rank number
  * @param gpu_sync sync gpu data. This option does not work because scalar is automatically synchronized.
  */
  void Bcast(float &val, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param val scalar value
  * @param root root rank number
  * @param gpu_sync sync gpu data. This option does not work because scalar is automatically synchronized.
  */
  void Bcast(int &val, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param val scalar value
  * @param root root rank number
  * @param gpu_sync sync gpu data. This option does not work because scalar is automatically synchronized.
  */
  void Bcast(size_t &val, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec monolish vector (size N)
  * @param root root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Bcast(monolish::vector<double> &vec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec monolish vector (size N)
  * @param root root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Bcast(monolish::vector<float> &vec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec std::vector (size N)
  * @param root root rank number
  */
  void Bcast(std::vector<double> &vec, int root) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec std::vector (size N)
  * @param root root rank number
  */
  void Bcast(std::vector<float> &vec, int root) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec std::vector (size N)
  * @param root root rank number
  */
  void Bcast(std::vector<int> &vec, int root) const;

  /**
  * @brief MPI_Bcast, Broadcasts a message from the process with rank root to all other processes
  * @param vec std::vector (size N)
  * @param root root rank number
  */
  void Bcast(std::vector<size_t> &vec, int root) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, std::vector (size N * # of procs)
  * @param val root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Gather(monolish::vector<double> &sendvec, monolish::vector<double> &recvvec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, std::vector (size N * # of procs)
  * @param val root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Gather(monolish::vector<float> &sendvec, monolish::vector<float> &recvvec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N * # of procs)
  * @param val root rank number
  */
  void Gather(std::vector<double> &sendvec, std::vector<double> &recvvec, int root) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N * # of procs)
  * @param val root rank number
  */
  void Gather(std::vector<float> &sendvec, std::vector<float> &recvvec, int root) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N * # of procs)
  * @param val root rank number
  */
  void Gather(std::vector<int> &sendvec, std::vector<int> &recvvec, int root) const;

  /**
  * @brief MPI_Gather, Gathers vector from all processes
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N * # of procs)
  * @param val root rank number
  */
  void Gather(std::vector<size_t> &sendvec, std::vector<size_t> &recvvec, int root) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N / # of procs)
  * @param val root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Scatter(monolish::vector<double> &sendvec, monolish::vector<double> &recvvec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, monolish vector (size N)
  * @param recvvec recv data, monolish vector (size N / # of procs)
  * @param val root rank number
  * @param gpu_sync sync gpu data.
  * @warning
  * When only_cpu flag is enabled and send data is on the GPU, data is received from the GPU, 
  * MPI communication is performed, and finally data is sent to the GPU.
  * If there is no GPU, or if there is no data on the GPU, no error will occur even if this flag is set to true.
  */
  void Scatter(monolish::vector<float> &sendvec, monolish::vector<float> &recvvec, int root, bool gpu_sync=false) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, std::vector (size N)
  * @param recvvec recv data, std::vector (size N / # of procs)
  * @param val root rank number
  */
  void Scatter(std::vector<double> &sendvec, std::vector<double> &recvvec, int root) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, std::vector (size N)
  * @param recvvec recv data, std::vector (size N / # of procs)
  * @param val root rank number
  */
  void Scatter(std::vector<float> &sendvec, std::vector<float> &recvvec, int root) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, std::vector (size N)
  * @param recvvec recv data, std::vector (size N / # of procs)
  * @param val root rank number
  */
  void Scatter(std::vector<int> &sendvec, std::vector<int> &recvvec, int root) const;

  /**
  * @brief MPI_Scatter, Sends data from one task to all tasks.
  * The data is evenly divided and transmitted to each process.
  * @param sendvec send data, std::vector (size N)
  * @param recvvec recv data, std::vector (size N / # of procs)
  * @param val root rank number
  */
  void Scatter(std::vector<size_t> &sendvec, std::vector<size_t> &recvvec, int root) const;
};
}
